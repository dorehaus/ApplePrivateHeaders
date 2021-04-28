/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSString;

@interface SSVMediaContentTasteUpdateResponse : NSObject <SSXPCCoding, NSSecureCoding> {

	char _cachedResponse;
	NSArray* _contentTasteItems;
	NSDate* _expirationDate;
	unsigned long long _responseRevisionID;

}

@property (nonatomic,copy) NSArray * contentTasteItems;                                //@synthesize contentTasteItems=_contentTasteItems - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned long long responseRevisionID;                    //@synthesize responseRevisionID=_responseRevisionID - In the implementation block
@property (assign,getter=isCachedResponse,nonatomic) char cachedResponse;              //@synthesize cachedResponse=_cachedResponse - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(void)setCachedResponse:(char)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(unsigned long long)responseRevisionID;
-(NSArray *)contentTasteItems;
-(void)setContentTasteItems:(NSArray *)arg1 ;
-(void)setResponseRevisionID:(unsigned long long)arg1 ;
-(char)isCachedResponse;
@end
