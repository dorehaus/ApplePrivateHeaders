/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Install/IFInstallQueueElement.h>

@class IFInstallActionsGroup;

@interface IFInstallActionsElement : IFInstallQueueElement {

	IFInstallActionsGroup* _actions;

}
+(char)canRunForPackage:(id)arg1 ;
-(long long)run;
-(void)dealloc;
-(id)init;
-(int)runTask:(id)arg1 ;
-(id)logDescription;
-(void)setActionsGroup:(id)arg1 ;
-(id)pathForComponentId:(id)arg1 ;
-(id)actionsGroup;
@end

