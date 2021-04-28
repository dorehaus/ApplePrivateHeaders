/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, PDIterate, NSString, NSDictionary;

@interface PDTimeNode : NSObject {

	NSMutableArray* mStartTimeConditions;
	NSMutableArray* mEndTimeConditions;
	NSMutableArray* mChildTimeNodeList;
	NSMutableArray* mSubTimeNodeList;
	PDIterate* mIterate;
	int mType;
	int mAnimationPresetClass;
	char mHasPresetId;
	int mPresetId;
	char mHasPresetSubType;
	int mPresetSubType;
	char mHasRepeatCount;
	int mRepeatCount;
	char mHasRepeatDuration;
	int mRepeatDuration;
	int mRestartType;
	char mHasDuration;
	double mDuration;
	char mHasSpeed;
	double mSpeed;
	char mHasAcceleration;
	double mAcceleration;
	char mHasDeceleration;
	double mDeceleration;
	char mHasDisplay;
	char mDisplay;
	char mHasFillType;
	int mFillType;
	NSString* mGroupId;
	NSDictionary* attributeMap;

}

@property (nonatomic,retain) NSDictionary * attributeMap; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(char)display;
-(void)setSpeed:(double)arg1 ;
-(void)setRepeatCount:(int)arg1 ;
-(int)repeatDuration;
-(int)repeatCount;
-(double)speed;
-(char)hasType;
-(char)hasSpeed;
-(char)hasDuration;
-(void)setFillType:(int)arg1 ;
-(int)fillType;
-(char)hasFillType;
-(void)setGroupId:(id)arg1 ;
-(id)groupId;
-(void)setDisplay:(char)arg1 ;
-(double)acceleration;
-(void)setAcceleration:(double)arg1 ;
-(void)setChildTimeNodeList:(id)arg1 ;
-(id)childTimeNodeList;
-(void)setStartTimeConditions:(id)arg1 ;
-(void)setPresetId:(int)arg1 ;
-(void)setPresetSubType:(int)arg1 ;
-(void)setAnimationPresetClass:(int)arg1 ;
-(void)setGroupIdValue:(int)arg1 ;
-(int)animationPresetClass;
-(int)restartType;
-(int)presetId;
-(int)presetSubType;
-(double)deceleration;
-(id)startTimeConditions;
-(id)endTimeConditions;
-(id)subTimeNodeList;
-(id)iterate;
-(void)setEndTimeConditions:(id)arg1 ;
-(void)setSubTimeNodeList:(id)arg1 ;
-(void)setIterate:(id)arg1 ;
-(char)hasPresetClass;
-(char)hasPresetSubType;
-(char)hasPresetId;
-(char)hasRepeatCount;
-(char)hasRepeatDuration;
-(void)setRepeatDuration:(int)arg1 ;
-(char)hasRestartType;
-(void)setRestartType:(int)arg1 ;
-(char)hasAcceleration;
-(char)hasDeceleration;
-(void)setDeceleration:(double)arg1 ;
-(char)hasDisplay;
-(NSDictionary *)attributeMap;
-(void)setAttributeMap:(NSDictionary *)arg1 ;
-(long long)writeDuration;
-(long long)writeRepeatCount;
@end

