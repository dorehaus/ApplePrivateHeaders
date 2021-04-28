/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class BU_TBackupView, BU_TBackupLayer, NSString;

@interface BU_TBackupCompletionDelegate : NSObject <CAAnimationDelegate> {

	int fAnimationKind;
	BU_TBackupView* fLayerView;
	BU_TBackupLayer* fLayer;
	NSString* fKey;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAnimationKind:(int)arg1 withView:(id)arg2 withAnimationID:(id)arg3 forLayer:(id)arg4 ;
-(void)showTopSnapshotComplete;
-(void)hideTopSnapshotComplete;
-(void)prepareToRevealInAnimationComplete;
-(void)revealInAnimationComplete;
-(void)revealOutAnimationComplete;
-(void)promoteDemoteSnapshotAnimationComplete;
-(id)init:(int)arg1 withObject:(id)arg2 forKey:(id)arg3 ;
-(void)dealloc;
-(void)animationDidStart:(id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(char)arg2 ;
@end
