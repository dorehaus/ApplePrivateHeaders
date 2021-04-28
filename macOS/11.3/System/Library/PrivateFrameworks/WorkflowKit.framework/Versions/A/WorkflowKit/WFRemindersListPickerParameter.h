/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFEnumerationParameter.h>

@class NSArray;

@interface WFRemindersListPickerParameter : WFEnumerationParameter {

	char _allowsAllLists;
	id _defaultSerializedListRepresentation;
	NSArray* _listStates;

}

@property (nonatomic,retain) id defaultSerializedListRepresentation;              //@synthesize defaultSerializedListRepresentation=_defaultSerializedListRepresentation - In the implementation block
@property (nonatomic,retain) NSArray * listStates;                                //@synthesize listStates=_listStates - In the implementation block
@property (nonatomic,readonly) char allowsAllLists;                               //@synthesize allowsAllLists=_allowsAllLists - In the implementation block
-(NSArray *)listStates;
-(id)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(void)wasAddedToWorkflow;
-(void)wasRemovedFromWorkflow;
-(id)defaultSerializedRepresentation;
-(void)reloadStates;
-(char)allowsAllLists;
-(id)defaultSerializedListRepresentation;
-(void)setDefaultSerializedListRepresentation:(id)arg1 ;
-(void)setListStates:(NSArray *)arg1 ;
@end

