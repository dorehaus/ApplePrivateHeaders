/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, AMGroup, NSCountedSet;

@interface AMLibrary : NSObject {

	NSArray* _actionsLibrary;
	NSArray* _variablesLibrary;
	AMGroup* _applicationsGroup;
	AMGroup* _categoriesGroup;
	unsigned long long _organizationStyle;
	NSCountedSet* _observedGroups;

}

@property (retain) NSCountedSet * observedGroups;                               //@synthesize observedGroups=_observedGroups - In the implementation block
@property (nonatomic,retain) NSArray * actionsLibrary;                          //@synthesize actionsLibrary=_actionsLibrary - In the implementation block
@property (nonatomic,retain) NSArray * variablesLibrary;                        //@synthesize variablesLibrary=_variablesLibrary - In the implementation block
@property (nonatomic,retain) AMGroup * applicationsGroup; 
@property (nonatomic,retain) AMGroup * categoriesGroup; 
@property (assign,nonatomic) unsigned long long organizationStyle;              //@synthesize organizationStyle=_organizationStyle - In the implementation block
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
+(id)sharedLibrary;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(id)actions;
-(void)removeAction:(id)arg1 ;
-(NSArray *)actionsLibrary;
-(AMGroup *)categoriesGroup;
-(AMGroup *)applicationsGroup;
-(void)registryDidAddAction:(id)arg1 ;
-(void)setObservedGroups:(NSCountedSet *)arg1 ;
-(id)createActionsLibrary;
-(id)createVariablesLibrary;
-(void)setActionsLibrary:(NSArray *)arg1 ;
-(id)createActionGroups;
-(NSCountedSet *)observedGroups;
-(NSArray *)variablesLibrary;
-(id)createVariableGroups;
-(void)organizeAction:(id)arg1 byKey:(id)arg2 inGroup:(id)arg3 ;
-(void)writeGroupsForContext:(void*)arg1 ;
-(void)organizeActions:(id)arg1 byKey:(id)arg2 inGroup:(id)arg3 ;
-(void)setOrganizationStyle:(unsigned long long)arg1 ;
-(void)setDatesForNewActionsInPath:(id)arg1 ;
-(void)setApplicationsGroup:(AMGroup *)arg1 ;
-(void)setCategoriesGroup:(AMGroup *)arg1 ;
-(void)setVariablesLibrary:(NSArray *)arg1 ;
-(unsigned long long)organizationStyle;
@end

