/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/Versions/A/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _backingDictionary;

}

@property (readonly) double price; 
@property (readonly) NSDictionary * dictionary; 
+(char)supportsSecureCoding;
+(id)buyParamsWithString:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)stringValue;
-(id)propertyForKey:(id)arg1 ;
-(void)setProperty:(id)arg1 forKey:(id)arg2 ;
-(id)initWithString:(id)arg1 ;
-(NSDictionary *)dictionary;
-(void)clear;
-(double)price;
-(void)_parseBuyParams:(id)arg1 ;
-(id)_normalizedDictionary;
-(id)buyParametersForRequest;
-(void)importURLEncodedBuyParams:(id)arg1 ;
-(id)requestDataWithError:(id*)arg1 ;
@end

