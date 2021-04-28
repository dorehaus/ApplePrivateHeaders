/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MediaLibrary.framework/Versions/A/MediaLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MLMediaLibrary, MLMediaGroup, NSArray, NSDictionary, NSData;

@interface MLMediaGroupImpl : NSObject {

	char _mediaObjectsRequested;
	char _iconImageDataRequested;
	MLMediaLibrary* _mediaLibrary;
	MLMediaGroup* _parent;
	NSArray* _childGroups;
	NSArray* _mediaObjects;
	NSDictionary* _attributes;
	NSData* _iconImageData;

}

@property (assign,nonatomic) char mediaObjectsRequested;                 //@synthesize mediaObjectsRequested=_mediaObjectsRequested - In the implementation block
@property (assign,nonatomic) char iconImageDataRequested;                //@synthesize iconImageDataRequested=_iconImageDataRequested - In the implementation block
@property (assign,nonatomic) MLMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (assign,nonatomic) MLMediaGroup * parent;                      //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSArray * childGroups;                      //@synthesize childGroups=_childGroups - In the implementation block
@property (nonatomic,copy) NSArray * mediaObjects;                       //@synthesize mediaObjects=_mediaObjects - In the implementation block
@property (nonatomic,copy) NSDictionary * attributes;                    //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSData * iconImageData;                     //@synthesize iconImageData=_iconImageData - In the implementation block
-(void)dealloc;
-(MLMediaGroup *)parent;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setParent:(MLMediaGroup *)arg1 ;
-(void)setMediaLibrary:(MLMediaLibrary *)arg1 ;
-(MLMediaLibrary *)mediaLibrary;
-(void)setMediaObjectsRequested:(char)arg1 ;
-(void)setIconImageDataRequested:(char)arg1 ;
-(NSArray *)childGroups;
-(void)setChildGroups:(NSArray *)arg1 ;
-(NSData *)iconImageData;
-(char)iconImageDataRequested;
-(void)setIconImageData:(NSData *)arg1 ;
-(void)setMediaObjects:(NSArray *)arg1 ;
-(NSArray *)mediaObjects;
-(char)mediaObjectsRequested;
@end

