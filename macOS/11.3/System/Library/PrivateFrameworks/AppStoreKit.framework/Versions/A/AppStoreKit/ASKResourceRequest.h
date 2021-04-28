/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/Versions/A/AppStoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObjectNSCopying, NSObject;
@interface ASKResourceRequest : NSObject {

	id<NSObject><NSCopying> _requestKey;
	id<NSObject> _cacheKey;

}

@property (nonatomic,copy) id<NSObject><NSCopying> requestKey;               //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,retain) id<NSObject> cacheKey;                          //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheOptions; 
+(id)makeUniqueKey;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id<NSObject>)cacheKey;
-(void)setCacheKey:(id<NSObject>)arg1 ;
-(id<NSObject><NSCopying>)requestKey;
-(void)setRequestKey:(id<NSObject><NSCopying>)arg1 ;
-(unsigned long long)cacheOptions;
-(id)makeLoadOperation;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
@end

