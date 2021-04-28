/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSDrawables.framework/Versions/A/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <TSDrawables/TSPCopying.h>
#import <TSDrawables/TSKDocumentObject.h>
#import <TSDrawables/TSKPencilAnnotation.h>

@class NSString, TSDPencilAnnotationStorage, TSDDrawableInfo, TSKPKDrawing;

@interface TSDPencilAnnotation : TSPObject <TSPCopying, TSKDocumentObject, TSKPencilAnnotation> {

	TSDPencilAnnotationStorage* _pencilAnnotationStorage;
	TSDDrawableInfo* _parent;

}

@property (nonatomic,retain) TSDPencilAnnotationStorage * pencilAnnotationStorage;              //@synthesize pencilAnnotationStorage=_pencilAnnotationStorage - In the implementation block
@property (nonatomic,readonly) TSKPKDrawing * drawing; 
@property (assign,nonatomic,__weak) TSDDrawableInfo * parent;                                   //@synthesize parent=_parent - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uuid; 
+(char)needsObjectUUID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)uuid;
-(TSDDrawableInfo *)parent;
-(void)setParent:(TSDDrawableInfo *)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)loadFromArchive:(const PencilAnnotationArchive*)arg1 unarchiver:(id)arg2 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(TSDPencilAnnotationStorage *)pencilAnnotationStorage;
-(id)initWithContext:(id)arg1 pencilAnnotationStorage:(id)arg2 ;
-(void)setPencilAnnotationStorage:(TSDPencilAnnotationStorage *)arg1 ;
@end

