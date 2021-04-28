/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Install.framework/Versions/A/Install
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IFInstallPlan, NSString, IFSearchContext, NSMutableSet;

@interface IFPathActionController : NSObject {

	IFInstallPlan* _plan;
	NSString* _destinationPath;
	IFSearchContext* _searchContext;
	NSMutableSet* _resolvedNodes;

}
-(void)dealloc;
-(id)plan;
-(id)initWithInstallPlan:(id)arg1 onTarget:(id)arg2 withSearchContext:(id)arg3 ;
-(char)resolveActionsForNode:(id)arg1 resolvingParents:(char)arg2 returningError:(id*)arg3 ;
-(id)installTarget;
@end

