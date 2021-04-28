/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSSet;


@protocol PGGraphUpdateInventory <NSObject>
@property (nonatomic,readonly) long long updateType; 
@property (assign,nonatomic) char isResumingFullAnalysis; 
@property (nonatomic,readonly) char hasMomentsToInsert; 
@property (nonatomic,readonly) char hasMomentsToDelete; 
@property (nonatomic,readonly) char hasMomentsToUpdate; 
@property (nonatomic,readonly) char hasHighlightsToInsert; 
@property (nonatomic,readonly) char hasHighlightsToDelete; 
@property (nonatomic,readonly) char hasHighlightsToUpdate; 
@property (nonatomic,readonly) char hasHighlightDayGroupsToInsert; 
@property (nonatomic,readonly) char hasPersonsToInsert; 
@property (nonatomic,readonly) char hasPersonsToDelete; 
@property (nonatomic,readonly) char hasPersonsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfMomentsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfHighlightsToUpdate; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToInsert; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToDelete; 
@property (nonatomic,readonly) NSSet * localIdentifiersOfPersonsToUpdate; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToUpdatedPersons; 
@property (nonatomic,readonly) NSSet * identifiersForMomentRelatedToDeletedPersons; 
@required
-(long long)updateType;
-(NSSet *)identifiersForMomentRelatedToUpdatedPersons;
-(NSSet *)identifiersForMomentRelatedToDeletedPersons;
-(id)momentsToProcessForMomentUpdateTypes:(unsigned long long)arg1 includeMomentsToIngest:(char)arg2;
-(id)highlightsToProcessForKind:(unsigned short)arg1 withHighlightUpdateTypes:(unsigned long long)arg2 includeHighlightsToIngest:(char)arg3;
-(char)isResumingFullAnalysis;
-(void)setIsResumingFullAnalysis:(char)arg1;
-(char)hasMomentsToInsert;
-(char)hasMomentsToDelete;
-(char)hasMomentsToUpdate;
-(char)hasHighlightsToInsert;
-(char)hasHighlightsToDelete;
-(char)hasHighlightsToUpdate;
-(char)hasHighlightDayGroupsToInsert;
-(char)hasPersonsToInsert;
-(char)hasPersonsToDelete;
-(char)hasPersonsToUpdate;
-(NSSet *)localIdentifiersOfMomentsToInsert;
-(NSSet *)localIdentifiersOfMomentsToDelete;
-(NSSet *)localIdentifiersOfMomentsToUpdate;
-(NSSet *)localIdentifiersOfHighlightsToInsert;
-(NSSet *)localIdentifiersOfHighlightsToDelete;
-(NSSet *)localIdentifiersOfHighlightsToUpdate;
-(NSSet *)localIdentifiersOfPersonsToInsert;
-(NSSet *)localIdentifiersOfPersonsToDelete;
-(NSSet *)localIdentifiersOfPersonsToUpdate;

@end

