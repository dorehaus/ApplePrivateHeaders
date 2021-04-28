/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzComposer/QuartzComposer-Structs.h>
#import <QuartzComposer/QCStructure.h>

@protocol QCStreamProvider;
@class QCPixelFormat;

@interface QCStream : QCStructure {

	id<QCStreamProvider> _provider;

}

@property (readonly) unsigned long long elementSize; 
@property (readonly) unsigned long long pixelsWide; 
@property (readonly) unsigned long long pixelsHigh; 
@property (readonly) unsigned long long pixelsDeep; 
@property (readonly) QCPixelFormat * pixelFormat; 
@property (readonly) int type; 
+(void)initialize;
+(id)createImageWithSource:(id)arg1 options:(id)arg2 ;
+(void)registerStreamProviderClass:(Class)arg1 ;
+(void)registerStreamExporterClass:(Class)arg1 ;
+(id)streamWithStructure:(id)arg1 ;
+(id)streamProviderClasses;
+(id)streamExporterClasses;
+(unsigned long long)streamExporterRegistryTimestamp;
-(void)dealloc;
-(unsigned long long)count;
-(id)_list;
-(void)encodeWithCoder:(id)arg1 ;
-(int)type;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(QCPixelFormat *)pixelFormat;
-(id)dictionaryRepresentation;
-(id)provider;
-(unsigned long long)pixelsHigh;
-(unsigned long long)pixelsWide;
-(unsigned long long)elementSize;
-(id)memberForKey:(id)arg1 ;
-(id)memberAtIndex:(unsigned long long)arg1 ;
-(void)addMember:(id)arg1 forKey:(id)arg2 ;
-(id)arrayRepresentation;
-(id)initWithStructure:(id)arg1 ;
-(void)setMember:(id)arg1 forKey:(id)arg2 ;
-(void)removeMemberForKey:(id)arg1 ;
-(void)removeMemberAtIndex:(unsigned long long)arg1 ;
-(void)removeAllMembers;
-(void)replaceMemberAtIndex:(unsigned long long)arg1 withMember:(id)arg2 ;
-(id)initWithProvider:(id)arg1 options:(id)arg2 ;
-(id)createQCArrayBufferObjectForManager:(id)arg1 withTarget:(unsigned)arg2 count:(unsigned long long)arg3 elementSize:(unsigned long long)arg4 type:(int)arg5 options:(id)arg6 ;
-(id)createQCArrayForManager:(id)arg1 withCount:(unsigned long long)arg2 elementSize:(unsigned long long)arg3 type:(int)arg4 options:(id)arg5 ;
-(unsigned long long)pixelsDeep;
-(id)initWithMemObject:(id)arg1 options:(id)arg2 ;
-(id)createImage2DMemObjectForManager:(id)arg1 withFormat:(id)arg2 options:(id)arg3 ;
-(id)createArrayMemObjectForManager:(id)arg1 withCount:(unsigned long long)arg2 elementSize:(unsigned long long)arg3 type:(int)arg4 options:(id)arg5 ;
-(id)createImage3DMemObjectForManager:(id)arg1 options:(id)arg2 ;
-(id)createRepresentationOfType:(id)arg1 forManager:(id)arg2 withCount:(unsigned long long)arg3 elementSize:(unsigned long long)arg4 type:(int)arg5 options:(id)arg6 ;
-(id)initWithList:(id)arg1 options:(id)arg2 ;
-(void)_populateWithStream;
-(id)createQCArrayTexture3DForManager:(id)arg1 withWidth:(unsigned long long)arg2 height:(unsigned long long)arg3 depth:(unsigned long long)arg4 options:(id)arg5 ;
-(id)initWithArray:(id)arg1 options:(id)arg2 ;
-(id)QCArrayRepresentation;
-(id)QCMemObjectRepresentation;
-(id)initWithC3DGeometry:(C3DGeometryRef)arg1 options:(id)arg2 ;
-(C3DGeometryRef)C3DGeometryRepresentation;
@end
