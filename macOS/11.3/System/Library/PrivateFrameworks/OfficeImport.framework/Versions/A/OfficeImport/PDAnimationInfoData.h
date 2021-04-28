/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDBuild, PDSequentialTimeNode, OADDrawable;

@interface PDAnimationInfoData : NSObject {

	unsigned mOrder;
	PDBuild* mBuild;
	PDSequentialTimeNode* mSequentialTimeNodeData;
	OADDrawable* mDrawable;

}
-(id)data;
-(unsigned)order;
-(id)build;
-(id)drawable;
-(id)initWithTarget:(id)arg1 presetClass:(int)arg2 presetId:(int)arg3 triggerType:(int)arg4 iterateType:(int)arg5 delay:(double)arg6 direction:(double)arg7 order:(unsigned)arg8 groupId:(id)arg9 build:(id)arg10 ;
@end

