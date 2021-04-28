/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSMutableOrderedSet, PLManagedFolder, NSURL;

@interface PLPersistedFolderMetadata : NSObject {

	char _pinned;
	char _prototype;
	char _inTrash;
	char _customSortAscending;
	int _customSortKey;
	NSString* _title;
	NSString* _uuid;
	NSString* _cloudGUID;
	NSNumber* _kind;
	NSMutableOrderedSet* _childUUIDs;
	NSString* _remappedUUID;
	PLManagedFolder* _folder;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLManagedFolder * folder;                       //@synthesize folder=_folder - In the implementation block
@property (nonatomic,retain) NSURL * metadataURL;                            //@synthesize metadataURL=_metadataURL - In the implementation block
@property (nonatomic,retain) NSString * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * cloudGUID;                           //@synthesize cloudGUID=_cloudGUID - In the implementation block
@property (nonatomic,retain) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSNumber * kind;                                //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isPinned,nonatomic) char pinned;                    //@synthesize pinned=_pinned - In the implementation block
@property (assign,getter=isPrototype,nonatomic) char prototype;              //@synthesize prototype=_prototype - In the implementation block
@property (assign,getter=isInTrash,nonatomic) char inTrash;                  //@synthesize inTrash=_inTrash - In the implementation block
@property (assign,nonatomic) char customSortAscending;                       //@synthesize customSortAscending=_customSortAscending - In the implementation block
@property (assign,nonatomic) int customSortKey;                              //@synthesize customSortKey=_customSortKey - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * childUUIDs;               //@synthesize childUUIDs=_childUUIDs - In the implementation block
@property (nonatomic,retain,readonly) NSString * remappedUUID;               //@synthesize remappedUUID=_remappedUUID - In the implementation block
@property (nonatomic,readonly) char isRootFolder; 
@property (nonatomic,readonly) char isProjectAlbumRootFolder; 
+(void)updateChildrenOrderingInFolder:(id)arg1 usingChildUUIDs:(id)arg2 sourceDescription:(id)arg3 includePendingChanges:(char)arg4 ;
+(char)isValidPath:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(char)isInTrash;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)kind;
-(NSString *)title;
-(void)setKind:(NSNumber *)arg1 ;
-(void)setPrototype:(char)arg1 ;
-(char)isPinned;
-(void)setPinned:(char)arg1 ;
-(char)_readMetadata;
-(NSURL *)metadataURL;
-(void)setFolder:(PLManagedFolder *)arg1 ;
-(PLManagedFolder *)folder;
-(int)customSortKey;
-(void)setCustomSortKey:(int)arg1 ;
-(char)customSortAscending;
-(void)setCustomSortAscending:(char)arg1 ;
-(NSString *)cloudGUID;
-(void)setInTrash:(char)arg1 ;
-(void)setCloudGUID:(NSString *)arg1 ;
-(void)removePersistedData;
-(void)updateChildrenOrderingInFolder:(id)arg1 includePendingChanges:(char)arg2 ;
-(NSMutableOrderedSet *)childUUIDs;
-(id)insertFolderFromDataInManagedObjectContext:(id)arg1 ;
-(char)isProjectAlbumRootFolder;
-(char)isRootFolder;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(void)writePersistedData;
-(void)_saveMetadata;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(char)isPrototype;
-(NSString *)remappedUUID;
-(id)initWithPLManagedFolder:(id)arg1 pathManager:(id)arg2 ;
-(void)setChildUUIDs:(NSMutableOrderedSet *)arg1 ;
@end

