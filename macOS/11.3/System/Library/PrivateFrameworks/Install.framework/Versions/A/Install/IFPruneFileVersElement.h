/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/IFInstallQueueElement.h>

@interface IFPruneFileVersElement : IFInstallQueueElement
+(char)canRunForPackage:(id)arg1 ;
-(long long)run;
-(id)description;
-(id)logDescription;
-(void)prunePaths:(id)arg1 forPackageController:(id)arg2 outMessages:(id)arg3 ;
-(long long)builtInVersionCompareFile:(id)arg1 withData:(id)arg2 ;
-(long long)externalVersionCompareFile:(id)arg1 withData:(id)arg2 usingTool:(id)arg3 ;
@end

