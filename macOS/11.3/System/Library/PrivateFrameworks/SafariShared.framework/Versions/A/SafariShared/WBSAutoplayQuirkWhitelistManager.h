/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:52 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/Versions/A/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WBSRemotePlistController;

@interface WBSAutoplayQuirkWhitelistManager : NSObject {

	WBSRemotePlistController* _remotePlistController;

}
-(id)init;
-(id)initWithBuiltInWhitelistURL:(id)arg1 downloadsDirectoryURL:(id)arg2 resourceName:(id)arg3 resourceVersion:(id)arg4 updateDateDefaultsKey:(id)arg5 updateInterval:(double)arg6 ;
-(void)prepareForTermination;
-(void)quirksForDomain:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

