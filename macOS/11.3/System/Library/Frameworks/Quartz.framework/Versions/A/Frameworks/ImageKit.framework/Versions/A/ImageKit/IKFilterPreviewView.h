/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:53 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <MetalKit/MTKView.h>
#import <libobjc.A.dylib/MTKViewDelegate.h>

@protocol MTLCommandQueue;
@class CIImage, CIFilter, CIContext, NSString;

@interface IKFilterPreviewView : MTKView <MTKViewDelegate> {

	CIImage* checkerBoardImage;
	CIFilter* _currentFilter;
	CIImage* _baseImage;
	CIContext* _cicontext;
	id<MTLCommandQueue> _commandQueue;

}

@property (retain) CIFilter * currentFilter;                        //@synthesize currentFilter=_currentFilter - In the implementation block
@property (retain) CIImage * baseImage;                             //@synthesize baseImage=_baseImage - In the implementation block
@property (retain) CIContext * cicontext;                           //@synthesize cicontext=_cicontext - In the implementation block
@property (retain) id<MTLCommandQueue> commandQueue;                //@synthesize commandQueue=_commandQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFilterByName:(id)arg1 ;
-(void)setCicontext:(CIContext *)arg1 ;
-(id)alternateImage:(CGSize)arg1 ;
-(id)backdropChecker;
-(id)imageToDraw;
-(CIContext *)cicontext;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(id<MTLCommandQueue>)commandQueue;
-(void)awakeFromNib;
-(CIImage *)baseImage;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
-(void)drawInMTKView:(id)arg1 ;
-(void)mtkView:(id)arg1 drawableSizeWillChange:(CGSize)arg2 ;
-(CIFilter *)currentFilter;
-(void)setCommandQueue:(id<MTLCommandQueue>)arg1 ;
-(void)setBaseImage:(CIImage *)arg1 ;
-(void)setCurrentFilter:(CIFilter *)arg1 ;
@end

