/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/Versions/A/RunningBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary, RBEntitlementPredicate;

@interface RBAttributeTemplateGroup : NSObject {

	NSArray* _attributes;
	NSDictionary* _targetBundleProperties;
	RBEntitlementPredicate* _originatorEntitlements;
	RBEntitlementPredicate* _targetEntitlements;
	NSDictionary* _additionalRestrictions;

}

@property (nonatomic,retain) NSArray * attributes;                             //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSDictionary * targetBundleProperties;              //@synthesize targetBundleProperties=_targetBundleProperties - In the implementation block
-(NSDictionary *)targetBundleProperties;
-(void)setTargetBundleProperties:(NSDictionary *)arg1 ;
-(id)description;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
@end

