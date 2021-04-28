/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/TSPersistence.framework/Versions/A/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TSPComponent;


@protocol TSPUnarchiverDelegate <NSObject>
@property (nonatomic,readonly) long long componentIdentifier; 
@property (nonatomic,readonly) unsigned long long fileFormatVersion; 
@property (nonatomic,readonly) unsigned long long readVersion; 
@property (nonatomic,readonly) char didFinishResolvingReferences; 
@property (nonatomic,readonly) char hasDocumentVersionUUID; 
@property (nonatomic,readonly) long long sourceType; 
@property (nonatomic,readonly) char canRetainObjectReferencedByWeakLazyReference; 
@property (nonatomic,readonly) char isCrossDocumentPaste; 
@property (nonatomic,readonly) char isCrossAppPaste; 
@property (nonatomic,readonly) TSPComponent * component; 
@optional
-(TSPComponent *)component;
-(char)isCrossAppPaste;
-(char)isCrossDocumentPaste;

@required
-(long long)sourceType;
-(long long)componentIdentifier;
-(unsigned long long)fileFormatVersion;
-(char)hasDocumentVersionUUID;
-(char)didFinishResolvingReferences;
-(char)canRetainObjectReferencedByWeakLazyReference;
-(void)unarchiver:(id)arg1 didReadLazyReference:(id)arg2 isExternal:(char*)arg3;
-(id)dataForIdentifier:(long long)arg1 referencedByObjectIdentifier:(long long)arg2 objectClass:(Class)arg3;
-(unsigned long long)readVersion;
-(long long)objectIdentifierForUUID:(id)arg1;
-(id)UUIDForObjectIdentifier:(long long)arg1;

@end
