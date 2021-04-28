/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLock;

@interface ILPluginLoadManager : NSObject {

	NSLock* _stateLock;
	int _loadState;
	char _loadRequestPending;
	char _cancelLoadRequestPending;
	char _autoReloadEnabled;
	char _needsReload;
	char _loadDataCalled;

}
-(id)init;
-(char)isLoaded;
-(char)isLoading;
-(char)isUnloaded;
-(void)setNeedsReload:(char)arg1 ;
-(char)needsReload;
-(int)loadState;
-(void)setLoadState:(int)arg1 ;
-(char)isLoadRequestPending;
-(void)setLoadRequestPending:(char)arg1 ;
-(void)setLoadDataCalled:(char)arg1 ;
-(void)setCancelLoadRequestPending:(char)arg1 ;
-(char)isAutoReloadEnabled;
-(void)setAutoReloadEnabled:(char)arg1 ;
-(char)isCancelLoadRequestPending;
-(char)loadDataCalled;
@end

