/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDAnimateBehavior.h>

@class NSString;

@interface PDAnimateTimeBehavior : PDAnimateBehavior {

	NSString* mTo;
	NSString* mFrom;
	NSString* mBy;
	char mHasCalcMode;
	int mCalcMode;
	char mHasValueType;
	int mValueType;

}
-(id)init;
-(int)valueType;
-(void)setFrom:(id)arg1 ;
-(void)setTo:(id)arg1 ;
-(id)from;
-(id)to;
-(void)setValueType:(int)arg1 ;
-(char)hasValueType;
-(void)setBy:(id)arg1 ;
-(id)by;
-(char)hasCalcMode;
-(int)calcMode;
-(void)setCalcMode:(int)arg1 ;
@end

