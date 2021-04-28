/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBStateCaptureManaging <NSObject>
@required
-(id)stateForSubsystem:(id)arg1;
-(void)addItemWithTitle:(id)arg1 identifier:(id)arg2 block:(/*^block*/id)arg3;
-(void)addItem:(id)arg1 withIdentifier:(id)arg2;
-(void)addItem:(id)arg1;
-(void)removeItem:(id)arg1;
-(id)identifiers;
-(void)removeItemWithIdentifier:(id)arg1;

@end

