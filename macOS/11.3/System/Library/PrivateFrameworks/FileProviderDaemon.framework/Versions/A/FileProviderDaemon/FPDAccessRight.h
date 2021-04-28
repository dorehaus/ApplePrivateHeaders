/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FileProviderDaemon.framework/Versions/A/FileProviderDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FPDExtension;

@interface FPDAccessRight : NSObject {

	unsigned long long _accessLevel;
	FPDExtension* _provider;

}

@property (nonatomic,readonly) unsigned long long level; 
@property (nonatomic,__weak,readonly) FPDExtension * provider;              //@synthesize provider=_provider - In the implementation block
-(id)init;
-(unsigned long long)level;
-(FPDExtension *)provider;
-(void)_computeAccessForURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 ;
-(id)initWithURL:(id)arg1 entitlements:(id)arg2 connection:(id)arg3 manager:(id)arg4 ;
-(id)initWithURL:(id)arg1 connection:(id)arg2 manager:(id)arg3 ;
@end

