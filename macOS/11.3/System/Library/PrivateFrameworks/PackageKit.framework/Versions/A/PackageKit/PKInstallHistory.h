/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Versions/A/PackageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PKInstallHistory : NSObject {

	NSString* _path;

}
+(id)historyOnVolume:(id)arg1 ;
+(id)defaultHistory;
-(char)addInstallRequest:(id)arg1 ;
-(id)installedItems;
-(char)_openInstallHistoryWithItems:(id)arg1 returningError:(id*)arg2 ;
-(char)recordInstall:(id)arg1 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(char)recordInstall:(id)arg1 returningError:(id*)arg2 ;
@end

