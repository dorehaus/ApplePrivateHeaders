/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iLifeMediaBrowser/iLifeMediaBrowser-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSImage, NSURL, NSDate, NSDictionary, NSMutableArray;

@interface ILMediaGroup : NSObject <NSCopying> {

	NSString* _ID;
	NSString* _name;
	NSImage* _icon;
	NSURL* _url;
	NSDate* _modificationDate;
	NSDictionary* _attributes;
	NSMutableArray* _childGroups;
	id _reserved4;
	NSString* _parentID;
	unsigned long long _type;
	char _dynamicMediaObjects;
	id _reserved1;
	id _reserved2;
	id _reserved3;

}
+(char)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)identifierForMediaGroupType:(unsigned long long)arg1 ;
+(id)modDateForFile:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)name;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(void)setName:(id)arg1 ;
-(id)path;
-(id)URL;
-(long long)caseInsensitiveCompare:(id)arg1 ;
-(id)initWithTypeIdentifier:(id)arg1 ;
-(id)typeIdentifier;
-(void)setPath:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)_pluginIdentifier;
-(id)attributes;
-(id)objectSpecifier;
-(char)isLoaded;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)setAttributes:(id)arg1 ;
-(id)modificationDate;
-(void)setIcon:(id)arg1 ;
-(id)icon;
-(void)setLoaded:(char)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(void)setModificationDate:(id)arg1 ;
-(void)setTypeIdentifier:(id)arg1 ;
-(id)ID;
-(char)isLoading;
-(id)_stateLock;
-(id)childGroups;
-(void)setChildGroups:(id)arg1 ;
-(void)setMediaObjects:(id)arg1 ;
-(id)mediaObjects;
-(id)parentID;
-(void)setParentID:(id)arg1 ;
-(void)setID:(id)arg1 ;
-(id)_changeManager;
-(id)sourcePluginIdentifier;
-(void)addMediaObjects:(id)arg1 ;
-(char)_isiTunesPlaylist;
-(char)_isiPhotoAlbum;
-(void)_setPluginIdentifier:(id)arg1 ;
-(id)mediaObjectsProvider;
-(id)_mediaObjectsProvider;
-(void)_setMediaObjectsProvider:(id)arg1 ;
-(void)setDynamicMediaObjects:(char)arg1 ;
-(void)removeFromObserve:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_IDNoLock;
-(void)_setURLNoLock:(id)arg1 ;
-(unsigned long long)mediaGroupTypeForIdentifier:(id)arg1 ;
-(id)_typeIdentifierNoLock;
-(id)_allMediaObjectsNoLock;
-(id)mediaObjectsAsync;
-(id)allMediaObjects_SearchedGroups:(id)arg1 ;
-(id)_childGroupsNoLock;
-(id)iMovieGroupAllMediaObjects;
-(void)addToObserve:(id)arg1 forKeyPath:(id)arg2 ;
-(id)_nameNoLock;
-(id)_URLNoLock;
-(id)localMediaObjects;
-(unsigned long long)mediaObjectsCount;
-(char)containsMediaObjectsWithMediaTypeMask:(unsigned long long)arg1 ;
-(id)_childGroupForPath:(id)arg1 alreadySearched:(id)arg2 ;
-(void)replaceGroupAtIndex:(long long)arg1 withGroup:(id)arg2 ;
-(char)updateChildGroup:(id)arg1 ;
-(void)_insertChildGroup:(id)arg1 atIndex:(id)arg2 ;
-(void)removeMediaObject:(id)arg1 ;
-(void)setSourcePluginIdentifier:(id)arg1 ;
-(void)setLoading;
-(void)cancelMediaObjectsLoading;
-(id)initWithPlugin:(id)arg1 typeIdentifier:(id)arg2 ;
-(id)allMediaObjects;
-(id)internalMediaObjectsArray;
-(void)setInternalMediaObjectsArray:(id)arg1 ;
-(void)addChildGroups:(id)arg1 ;
-(void)addChildGroup:(id)arg1 ;
-(char)isDynamicMediaObjects;
-(char)_isApertureAlbum;
-(char)_isiMovieGroup;
-(char)_isGarageBandGroup;
-(char)shouldHideCountTextField;
-(id)mediaObjectsCountNumber;
-(long long)iTunesFoldersBeforePlaylistsDisplayOrder;
-(long long)iTunesPlaylistDisplayOrder;
-(id)_childGroupForPath:(id)arg1 ;
-(void)removeChildGroup:(id)arg1 ;
-(void)insertChildGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
@end

