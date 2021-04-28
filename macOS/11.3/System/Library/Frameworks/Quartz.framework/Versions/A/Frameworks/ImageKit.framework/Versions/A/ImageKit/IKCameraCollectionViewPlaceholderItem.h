/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICCameraFile, NSFilePromiseProvider;

@interface IKCameraCollectionViewPlaceholderItem : NSObject {

	char _selected;
	ICCameraFile* _cameraItem;
	NSFilePromiseProvider* _promise;
	unsigned long long _objectID;

}

@property (nonatomic,retain) ICCameraFile * cameraItem;                    //@synthesize cameraItem=_cameraItem - In the implementation block
@property (assign,nonatomic) char selected;                                //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) NSFilePromiseProvider * promise;              //@synthesize promise=_promise - In the implementation block
@property (assign,nonatomic) unsigned long long objectID;                  //@synthesize objectID=_objectID - In the implementation block
-(void)setCameraItem:(ICCameraFile *)arg1 ;
-(ICCameraFile *)cameraItem;
-(id)initWithCameraItem:(id)arg1 selected:(char)arg2 ;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(unsigned long long)objectID;
-(char)selected;
-(void)setSelected:(char)arg1 ;
-(NSFilePromiseProvider *)promise;
-(void)setObjectID:(unsigned long long)arg1 ;
-(void)setPromise:(NSFilePromiseProvider *)arg1 ;
@end

