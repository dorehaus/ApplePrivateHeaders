/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaLibrary.framework/Versions/A/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLMediaSourceImpl, NSDictionary, MLMediaLibrary, NSString, MLMediaGroup;

@interface MLMediaSource : NSObject {

	MLMediaSourceImpl* _impl;

}

@property (copy) NSDictionary * attributes; 
@property (readonly) MLMediaLibrary * mediaLibrary; 
@property (copy,readonly) NSString * mediaSourceIdentifier; 
@property (retain,readonly) MLMediaGroup * rootMediaGroup; 
-(void)dealloc;
-(id)debugDescription;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)xpcConnectionWasInterrupted;
-(id)initWithMediaLibrary:(id)arg1 attributes:(id)arg2 ;
-(void)nullOutLibraryPointer;
-(MLMediaLibrary *)mediaLibrary;
-(void)setRootGroupAttributes:(id)arg1 ;
-(void)updateAttributes:(id)arg1 forMediaGroup:(id)arg2 ;
-(void)updateAttributes:(id)arg1 forMediaObject:(id)arg2 ;
-(NSString *)mediaSourceIdentifier;
-(id)mediaObjectFromAttributes:(id)arg1 ;
-(void)_resetGroupAndObjectMaps;
-(id)mediaGroupsForIdentifiers:(id)arg1 ;
-(id)mediaObjectsForIdentifiers:(id)arg1 ;
-(void)setRootMediaGroup:(MLMediaGroup *)arg1 ;
-(MLMediaGroup *)rootMediaGroup;
-(id)_recursiveCreateGroups:(id)arg1 parent:(id)arg2 ;
-(void)_storeMediaGroupByIdentifier:(id)arg1 ;
-(id)mediaGroupForIdentifier:(id)arg1 ;
-(id)mediaObjectForIdentifier:(id)arg1 ;
@end

