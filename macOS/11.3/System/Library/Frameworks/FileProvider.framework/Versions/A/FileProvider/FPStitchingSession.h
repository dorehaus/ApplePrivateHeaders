/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:19 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/FileProvider.framework/Versions/A/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray, NSDictionary;

@interface FPStitchingSession : NSObject {

	NSMutableDictionary* _stitchedFields;
	NSMutableDictionary* _originalItems;
	NSMutableDictionary* _stitchedItems;
	NSMutableDictionary* _stitchedPlaceholders;
	NSMutableDictionary* _placeholderReplacements;
	NSMutableDictionary* _deletedItems;
	char _started;
	char _finished;
	/*^block*/id _placeholdersCreationBlock;

}

@property (nonatomic,copy) id placeholdersCreationBlock;                                    //@synthesize placeholdersCreationBlock=_placeholdersCreationBlock - In the implementation block
@property (nonatomic,readonly) NSArray * placeholderItems; 
@property (nonatomic,readonly) NSDictionary * stitchedFieldsAndItemsByItemIDs; 
@property (nonatomic,readonly) NSDictionary * stitchedItemsByParentID; 
@property (nonatomic,readonly) NSArray * placeholderReplacementsIDs; 
@property (nonatomic,readonly) NSArray * deletedIDs; 
@property (nonatomic,readonly) char isActive; 
-(void)dealloc;
-(id)init;
-(char)isActive;
-(void)start;
-(void)finish;
-(void)flush;
-(void)setPlaceholdersCreationBlock:(id)arg1 ;
-(id)createArchivePlaceholderForItem:(id)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3 ;
-(id)createGenericArchivePlaceholderUnderParent:(id)arg1 inProviderDomainID:(id)arg2 ;
-(void)associateItem:(id)arg1 withPlaceholderID:(id)arg2 ;
-(void)finishWithItem:(id)arg1 error:(id)arg2 ;
-(id)createPlaceholderWithName:(id)arg1 typeIdentifier:(id)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5 ;
-(id)createPlaceholderWithName:(id)arg1 isFolder:(char)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5 ;
-(void)transformItems:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)finishWithItems:(id)arg1 error:(id)arg2 ;
-(void)replacePlaceholderWithID:(id)arg1 withItem:(id)arg2 ;
-(id)createPlaceholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4 ;
-(void)deleteItems:(id)arg1 ;
-(NSDictionary *)stitchedFieldsAndItemsByItemIDs;
-(NSArray *)placeholderItems;
-(NSArray *)placeholderReplacementsIDs;
-(NSArray *)deletedIDs;
-(char)cleanStitchedItemForItemID:(id)arg1 ;
-(NSDictionary *)stitchedItemsByParentID;
-(id)itemWithPlaceholderID:(id)arg1 ;
-(id)placeholdersCreationBlock;
@end

