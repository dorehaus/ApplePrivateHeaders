/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/Versions/A/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PEPServiceConfiguration : NSObject {

	NSString* _cacheFilePath;
	char _shouldDownloadNetworkConfigFile;
	double _cachedFileLastModifyDate;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_postNotification;
-(char)registerNetworkDefaultsForAppIDs:(id)arg1 forceUpdate:(char)arg2 ;
-(void)_updateDefaults:(id)arg1 ;
-(char)registerNetworkDefaultsForAppID:(id)arg1 ;
@end

