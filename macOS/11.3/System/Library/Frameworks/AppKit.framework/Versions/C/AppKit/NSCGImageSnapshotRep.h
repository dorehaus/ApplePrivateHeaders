/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>

@class NSSnapshotContextSignature;

@interface NSCGImageSnapshotRep : NSImageRep {

	CGImageRef _cgImage;
	NSSnapshotContextSignature* _signature;

}

@property (readonly) CGImageRef image; 
+(char)supportsSecureCoding;
+(id)classFallbacksForKeyedArchiver;
+(void)lockFocusForCreatingCGImageWithRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(char)arg4 ;
+(CGImageRef)unlockFocusCreatingCGImageAndDrawingRect:(CGRect*)arg1 ;
+(void)lockFocusForCreatingSnapshotWithRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 flipped:(char)arg4 ;
+(id)unlockFocusCreatingCGImageSnapshotRep;
+(void)_lockFocusForCreatingSnapshot:(char)arg1 withRect:(CGRect)arg2 context:(id)arg3 hints:(id)arg4 flipped:(char)arg5 ;
+(CGImageRef)_unlockFocusAndPerformBlockUsingCGImageAndCapturingContext:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)classForKeyedArchiver;
-(Class)classForArchiver;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(CGImageRef)image;
-(id)colorSpace;
-(long long)pixelsHigh;
-(long long)pixelsWide;
-(long long)bitsPerSample;
-(char)hasAlpha;
-(char)draw;
-(char)_isValid;
-(id)_imageRepsForEncodingWithCoder:(id)arg1 ;
-(id)initWithCGImage:(CGImageRef)arg1 drawingRect:(CGRect)arg2 applicableForRect:(CGRect)arg3 context:(id)arg4 hints:(id)arg5 ;
-(char)isApplicableForRect:(CGRect)arg1 context:(id)arg2 hints:(id)arg3 ;
-(char)_snapshotRep_commonSetupWithWithCGImage:(CGImageRef)arg1 snapshotContextSignature:(id)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 snapshotContextSignature:(id)arg2 ;
-(CGImageRef)_snapshotRep_CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
@end

