/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistiveControlSupport.framework/Versions/A/AssistiveControlSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistiveControlSupport/ACSHPlistObject.h>

@class NSMutableArray, NSArray;

@interface ACSHToolbarOrdering : ACSHPlistObject {

	NSMutableArray* __toolbarIdentifiersPriorToBasePanel;
	NSMutableArray* __toolbarIdentifiersAfterBasePanel;

}

@property (nonatomic,retain) NSMutableArray * _toolbarIdentifiersPriorToBasePanel;              //@synthesize _toolbarIdentifiersPriorToBasePanel=__toolbarIdentifiersPriorToBasePanel - In the implementation block
@property (nonatomic,retain) NSMutableArray * _toolbarIdentifiersAfterBasePanel;                //@synthesize _toolbarIdentifiersAfterBasePanel=__toolbarIdentifiersAfterBasePanel - In the implementation block
@property (nonatomic,copy,readonly) NSArray * _allToolbarIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * toolbarIdentifiersPriorToBasePanel; 
@property (nonatomic,copy,readonly) NSArray * toolbarIdentifiersAfterBasePanel; 
-(id)initWithUndoManager:(id)arg1 ;
-(id)dictionaryForSaving;
-(void)_configureWithPlistDictionary:(id)arg1 ;
-(id)descriptionForDepth:(unsigned long long)arg1 ;
-(id)allToolbarIdentifiersWithBasePanelIdentifier:(id)arg1 ;
-(void)set_toolbarIdentifiersPriorToBasePanel:(NSMutableArray *)arg1 ;
-(void)set_toolbarIdentifiersAfterBasePanel:(NSMutableArray *)arg1 ;
-(NSArray *)toolbarIdentifiersPriorToBasePanel;
-(NSArray *)toolbarIdentifiersAfterBasePanel;
-(NSMutableArray *)_toolbarIdentifiersPriorToBasePanel;
-(NSMutableArray *)_toolbarIdentifiersAfterBasePanel;
-(id)_allToolbarIdentifiersWithBasePanelIdentifier:(id)arg1 ;
-(void)mergeInToolbarOrdering:(id)arg1 ;
-(void)updateWithPanelCollection:(id)arg1 ;
-(NSArray *)_allToolbarIdentifiers;
-(void)reorderToolbarIdentifiersPrior:(id)arg1 after:(id)arg2 ;
@end

