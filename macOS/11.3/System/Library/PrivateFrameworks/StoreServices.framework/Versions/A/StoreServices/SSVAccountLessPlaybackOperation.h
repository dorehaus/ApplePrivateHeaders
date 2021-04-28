/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/Versions/A/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSVComplexOperation.h>

@class NSString, NSMutableDictionary, NSDictionary;

@interface SSVAccountLessPlaybackOperation : SSVComplexOperation {

	NSString* _assetStoreFrontIdentifier;
	NSMutableDictionary* _httpHeaderFields;
	NSString* _itemIdentifier;
	/*^block*/id _responseBlock;

}

@property (nonatomic,copy) NSDictionary * HTTPHeaderFields;                   //@synthesize httpHeaderFields=_httpHeaderFields - In the implementation block
@property (nonatomic,copy) NSString * assetStoreFrontIdentifier; 
@property (copy) NSString * itemIdentifier; 
@property (copy) id responseBlock; 
-(NSString *)itemIdentifier;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(void)main;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)valueForHTTPHeaderField:(id)arg1 ;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
-(id)_requestBodyData;
-(void)setHTTPHeaderFields:(NSDictionary *)arg1 ;
-(NSDictionary *)HTTPHeaderFields;
-(NSString *)assetStoreFrontIdentifier;
-(void)setAssetStoreFrontIdentifier:(NSString *)arg1 ;
@end

