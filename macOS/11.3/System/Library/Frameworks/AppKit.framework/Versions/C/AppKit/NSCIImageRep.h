/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSImageRep.h>

@class CIImage;

@interface NSCIImageRep : NSImageRep {

	CIImage* _ciImage;

}

@property (readonly) CIImage * CIImage; 
+(void)initialize;
+(id)imageRepWithCIImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(CGImageRef)CGImageForProposedRect:(CGRect*)arg1 context:(id)arg2 hints:(id)arg3 ;
-(char)draw;
-(id)initWithCIImage:(id)arg1 ;
-(char)_isValid;
-(char)drawInRect:(CGRect)arg1 ;
-(char)drawAtPoint:(CGPoint)arg1 ;
-(CIImage *)CIImage;
-(char)drawInRect:(CGRect)arg1 fromRect:(CGRect)arg2 operation:(unsigned long long)arg3 fraction:(double)arg4 respectFlipped:(char)arg5 hints:(id)arg6 ;
@end
