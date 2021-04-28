/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>
#import <libobjc.A.dylib/WFParameterDialogProvider.h>

@class NSArray, NSString;

@interface WFEnumerationParameter : WFParameter <WFParameterDialogProvider> {

	char _alwaysShowsButton;
	char _liveUpdatesPossibleStatesInEditor;
	char _providesLocalizedValuesForSummary;
	NSArray* _staticPossibleStates;
	NSArray* _displayNames;

}

@property (nonatomic,readonly) NSArray * staticPossibleStates;                       //@synthesize staticPossibleStates=_staticPossibleStates - In the implementation block
@property (nonatomic,readonly) NSArray * displayNames;                               //@synthesize displayNames=_displayNames - In the implementation block
@property (nonatomic,readonly) char providesLocalizedValuesForSummary;               //@synthesize providesLocalizedValuesForSummary=_providesLocalizedValuesForSummary - In the implementation block
@property (nonatomic,readonly) char preferParameterValuePicker; 
@property (nonatomic,readonly) NSArray * possibleStatesForLocalization; 
@property (nonatomic,readonly) char alwaysShowsButton;                               //@synthesize alwaysShowsButton=_alwaysShowsButton - In the implementation block
@property (nonatomic,readonly) NSArray * possibleStates; 
@property (nonatomic,readonly) char hidesSubtitleInEditor; 
@property (nonatomic,readonly) char hidesAccessoryIconInEditor; 
@property (nonatomic,readonly) char liveUpdatesPossibleStatesInEditor;               //@synthesize liveUpdatesPossibleStatesInEditor=_liveUpdatesPossibleStatesInEditor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)displayNames;
-(NSArray *)possibleStates;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(void)createDialogRequestWithAttribution:(id)arg1 defaultState:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)parameterStateFromDialogResponse:(id)arg1 ;
-(void)setPossibleStatesFromRemoteSource:(id)arg1 ;
-(NSArray *)possibleStatesForLocalization;
-(id)localizedTitleForButtonWithState:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 ;
-(id)localizedLabelForPossibleState:(id)arg1 inMultipleState:(id)arg2 ;
-(id)localizedLabelForMultipleState:(id)arg1 ;
-(id)localizedLabelForMultipleCompleteState:(id)arg1 ;
-(id)localizedSubtitleLabelForPossibleState:(id)arg1 ;
-(id)accessoryColorForPossibleState:(id)arg1 ;
-(id)accessoryIconForPossibleState:(id)arg1 ;
-(char)hidesAccessoryIconInEditor;
-(char)hidesSubtitleInEditor;
-(char)preferParameterValuePicker;
-(char)displaysMultipleValueEditor;
-(char)parameterStateIsValid:(id)arg1 ;
-(void)possibleStatesDidChange;
-(void)startLiveUpdatingPossibleStates;
-(void)stopLiveUpdatingPossibleStates;
-(char)alwaysShowsButton;
-(char)liveUpdatesPossibleStatesInEditor;
-(NSArray *)staticPossibleStates;
-(char)providesLocalizedValuesForSummary;
@end

