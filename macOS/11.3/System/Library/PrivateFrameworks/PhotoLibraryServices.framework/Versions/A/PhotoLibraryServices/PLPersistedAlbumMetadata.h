/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSMutableOrderedSet, NSData, PLGenericAlbum, NSURL;

@interface PLPersistedAlbumMetadata : NSObject {

	char _isFolder;
	char _pinned;
	char _prototype;
	char _inTrash;
	char _customSortAscending;
	char _allowsOverwrite;
	int _customSortKey;
	NSString* _title;
	NSString* _uuid;
	NSString* _cloudGUID;
	NSNumber* _kind;
	NSString* _customKeyAssetUUID;
	NSMutableOrderedSet* _assetUUIDs;
	NSString* _importSessionID;
	NSData* _userQueryData;
	NSString* _creatorBundleID;
	NSString* _projectDocumentType;
	PLGenericAlbum* _genericAlbum;
	NSURL* _metadataURL;

}

@property (nonatomic,retain) PLGenericAlbum * genericAlbum;                  //@synthesize genericAlbum=_genericAlbum - In the implementation block
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
@property (nonatomic,retain) NSString * customKeyAssetUUID;                  //@synthesize customKeyAssetUUID=_customKeyAssetUUID - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * assetUUIDs;               //@synthesize assetUUIDs=_assetUUIDs - In the implementation block
@property (nonatomic,retain) NSString * importSessionID;                     //@synthesize importSessionID=_importSessionID - In the implementation block
@property (nonatomic,retain) NSData * userQueryData;                         //@synthesize userQueryData=_userQueryData - In the implementation block
@property (nonatomic,retain) NSString * creatorBundleID;                     //@synthesize creatorBundleID=_creatorBundleID - In the implementation block
@property (nonatomic,retain) NSString * projectDocumentType;                 //@synthesize projectDocumentType=_projectDocumentType - In the implementation block
@property (nonatomic,readonly) char isFolder;                                //@synthesize isFolder=_isFolder - In the implementation block
@property (assign,nonatomic) char allowsOverwrite;                           //@synthesize allowsOverwrite=_allowsOverwrite - In the implementation block
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
-(char)isFolder;
-(int)customSortKey;
-(void)setCustomSortKey:(int)arg1 ;
-(char)customSortAscending;
-(void)setCustomSortAscending:(char)arg1 ;
-(void)setUserQueryData:(NSData *)arg1 ;
-(NSString *)projectDocumentType;
-(NSString *)cloudGUID;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(void)setCreatorBundleID:(NSString *)arg1 ;
-(void)setProjectDocumentType:(NSString *)arg1 ;
-(NSString *)creatorBundleID;
-(void)setInTrash:(char)arg1 ;
-(void)setCloudGUID:(NSString *)arg1 ;
-(void)updateChildrenOrderingInAlbum:(id)arg1 includePendingAssetChanges:(char)arg2 ;
-(id)insertAlbumFromDataInManagedObjectContext:(id)arg1 ;
-(id)initWithPersistedDataAtURL:(id)arg1 ;
-(NSMutableOrderedSet *)assetUUIDs;
-(void)_saveMetadata;
-(void)setMetadataURL:(NSURL *)arg1 ;
-(NSData *)userQueryData;
-(char)isPrototype;
-(NSString *)customKeyAssetUUID;
-(PLGenericAlbum *)genericAlbum;
-(char)allowsOverwrite;
-(id)initWithPLGenericAlbum:(id)arg1 pathManager:(id)arg2 ;
-(id)initWithTitle:(id)arg1 uuid:(id)arg2 cloudGUID:(id)arg3 kind:(id)arg4 assetUUIDs:(id)arg5 persistedAlbumDataDirectory:(id)arg6 ;
-(void)persistAlbumData;
-(void)removePersistedAlbumData;
-(id)_fetchChildUUIDs;
-(void)setCustomKeyAssetUUID:(NSString *)arg1 ;
-(void)setAssetUUIDs:(NSMutableOrderedSet *)arg1 ;
-(void)setAllowsOverwrite:(char)arg1 ;
-(void)setGenericAlbum:(PLGenericAlbum *)arg1 ;
@end
