/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PersonaUI.framework/Versions/A/PersonaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRLikenessCacheContext : NSObject {

	char _circular;
	char _forceDecode;
	unsigned long long _cacheSize;
	double _scale;

}

@property (assign) unsigned long long cacheSize;              //@synthesize cacheSize=_cacheSize - In the implementation block
@property (assign) char circular;                             //@synthesize circular=_circular - In the implementation block
@property (assign) double scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign) char forceDecode;                          //@synthesize forceDecode=_forceDecode - In the implementation block
+(id)contextWithCacheSize:(unsigned long long)arg1 ;
-(id)init;
-(double)scale;
-(void)setScale:(double)arg1 ;
-(unsigned long long)cacheSize;
-(void)setCacheSize:(unsigned long long)arg1 ;
-(void)setCircular:(char)arg1 ;
-(char)circular;
-(char)forceDecode;
-(void)setForceDecode:(char)arg1 ;
@end

