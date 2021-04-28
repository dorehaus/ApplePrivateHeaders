/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Backup.framework/Versions/A/Backup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Backup/Backup-Structs.h>
#import <QuartzCore/CALayer.h>

@class CABackdropLayer, CALayer;

@interface BU_TBackupLayer : CALayer {

	unsigned long long fIndex;
	BOOL fSnapshotImageRequested;
	shared_ptr<TTimeMachineTarget>* fTarget;
	TNSRef<CABackdropLayer, void> _backdropLayer;
	TNSRef<CALayer, void> _effectLayer;
	BOOL _configuredForInvalid;

}

@property (nonatomic,retain) CABackdropLayer * backdropLayer; 
@property (nonatomic,retain) CALayer * effectLayer; 
@property (assign,nonatomic) BOOL configuredForInvalid;                    //@synthesize configuredForInvalid=_configuredForInvalid - In the implementation block
-(BOOL)showAsValidTarget;
-(BOOL)configuredForInvalid;
-(void)setConfiguredForInvalid:(BOOL)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(CABackdropLayer *)backdropLayer;
-(void)setBackdropLayer:(CABackdropLayer *)arg1 ;
-(CALayer *)effectLayer;
-(void)setEffectLayer:(CALayer *)arg1 ;
@end

