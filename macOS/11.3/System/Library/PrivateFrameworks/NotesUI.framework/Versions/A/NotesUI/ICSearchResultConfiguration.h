/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSManagedObjectID, ICSortableSearchableItem;

@interface ICSearchResultConfiguration : NSObject {

	char _isTopHit;
	NSString* _searchString;
	unsigned long long _searchStringLength;
	unsigned long long _searchSuggestionType;
	NSManagedObjectID* _foundAttachmentObjectID;
	ICSortableSearchableItem* _sortableSearchableItem;

}

@property (nonatomic,readonly) NSString * searchString;                                        //@synthesize searchString=_searchString - In the implementation block
@property (nonatomic,readonly) unsigned long long searchStringLength;                          //@synthesize searchStringLength=_searchStringLength - In the implementation block
@property (nonatomic,readonly) unsigned long long searchSuggestionType;                        //@synthesize searchSuggestionType=_searchSuggestionType - In the implementation block
@property (nonatomic,readonly) char isTopHit;                                                  //@synthesize isTopHit=_isTopHit - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * foundAttachmentObjectID;                    //@synthesize foundAttachmentObjectID=_foundAttachmentObjectID - In the implementation block
@property (nonatomic,readonly) ICSortableSearchableItem * sortableSearchableItem;              //@synthesize sortableSearchableItem=_sortableSearchableItem - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)searchString;
-(char)isTopHit;
-(unsigned long long)searchSuggestionType;
-(NSManagedObjectID *)foundAttachmentObjectID;
-(ICSortableSearchableItem *)sortableSearchableItem;
-(id)initWithSearchString:(id)arg1 searchSuggestionType:(unsigned long long)arg2 isTopHit:(char)arg3 foundAttachmentObjectID:(id)arg4 sortableSearchableItem:(id)arg5 ;
-(unsigned long long)searchStringLength;
@end
