/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/Versions/A/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSWorkspaceDelegate_Exiting.h>

@protocol FBSUIApplicationWorkspaceDelegate, BSInvalidatable;
@class FBSSerialQueue, FBSUIApplicationWorkspace, FBSWorkspace, NSString;

@interface FBSUIApplicationWorkspaceShim : NSObject <FBSWorkspaceDelegate_Exiting> {

	FBSSerialQueue* _queue;
	FBSUIApplicationWorkspace* _original;
	FBSWorkspace* _workspace;
	id<FBSUIApplicationWorkspaceDelegate> _delegate;
	id<BSInvalidatable> _processExpirationObserver;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSString *)debugDescription;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)defaultShellEndpoint;
-(void)requestSceneFromEndpoint:(id)arg1 withOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)scenes;
-(id)sceneWithIdentifier:(id)arg1 ;
-(void)enumerateScenesWithBlock:(/*^block*/id)arg1 ;
-(void)requestSceneCreationWithInitialClientSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestSceneCreationWithIdentifier:(id)arg1 initialClientSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)requestSystemAnimationFence;
-(char)isTrackingAnySystemAnimationFence;
-(char)trackSystemAnimationFence:(id)arg1 ;
-(void)synchronizeSystemAnimationFencesWithCleanUpBlock:(/*^block*/id)arg1 ;
-(void)workspaceShouldExit:(id)arg1 withTransitionContext:(id)arg2 ;
-(void)workspace:(id)arg1 didCreateScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 willDestroyScene:(id)arg2 withTransitionContext:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)workspace:(id)arg1 didReceiveActions:(id)arg2 ;
-(id)_initWithSerialQueue:(id)arg1 original:(id)arg2 ;
@end
