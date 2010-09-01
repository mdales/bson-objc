//
//  BSONCodec.h
//  BSON Codec for Objective-C.
//
//  Created by Martin Kou on 8/17/10.
//  MIT License, see LICENSE file for details.
//

#import <Foundation/Foundation.h>
#import <stdint.h>

@protocol BSONCoding
- (uint8_t) BSONTypeID;
- (NSData *) BSONEncode;
+ (id) BSONFragment: (NSData *) data at: (const void **) base ofType: (uint8_t) typeID;
@end

@interface NSDictionary (BSON) <BSONCoding>
@end

@interface NSData (BSON) <BSONCoding>
- (NSDictionary *) BSONValue;
@end

@interface NSNumber (BSON) <BSONCoding>
@end

@interface NSString (BSON) <BSONCoding>
@end

@interface NSArray (BSON) <BSONCoding>
@end

@interface NSNull (BSON) <BSONCoding>
@end