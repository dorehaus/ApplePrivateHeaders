/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/Versions/A/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RenderBox/RenderBox-Structs.h>
@class RBDisplayList;

@interface RBSurface : NSObject {

	objc_ptr<RBDisplayList *> _displayList;
	unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable>>* _drawable;
	objc_ptr<id<MTLDevice>> _device;
	refcounted_ptr<RB::Texture>* _texture;
	void* _lastItem;
	Bounds _dirty;
	char _clearsBackground;
	char _opaque;
	int _colorMode;
	double _scale;
	CGSize _size;
	SCD_Struct_RB31 _clearColor;

}

@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int colorMode;                            //@synthesize colorMode=_colorMode - In the implementation block
@property (assign,nonatomic) char clearsBackground;                    //@synthesize clearsBackground=_clearsBackground - In the implementation block
@property (assign,nonatomic) SCD_Struct_RB31 clearColor;               //@synthesize clearColor=_clearColor - In the implementation block
@property (assign,getter=isOpaque,nonatomic) char opaque;              //@synthesize opaque=_opaque - In the implementation block
@property (nonatomic,retain) RBDisplayList * displayList; 
-(CGSize)size;
-(id)init;
-(void)invalidate;
-(void)setSize:(CGSize)arg1 ;
-(void)setClearColor:(SCD_Struct_RB31)arg1 ;
-(double)scale;
-(char)isOpaque;
-(SCD_Struct_RB31)clearColor;
-(void)setOpaque:(char)arg1 ;
-(void)setScale:(double)arg1 ;
-(int)colorMode;
-(void)setDisplayList:(RBDisplayList *)arg1 ;
-(RBDisplayList *)displayList;
-(char)clearsBackground;
-(void)setColorMode:(int)arg1 ;
-(void)setClearsBackground:(char)arg1 ;
-(void)invalidateInRect:(Rect)arg1 ;
-(BOOL)_updateWithDevice:(Device*)arg1 frame:(RenderFrame*)arg2 synchronized:(char)arg3 ;
-(void)setDisplayList:(id)arg1 dirtyRect:(CGRect)arg2 ;
-(CGImageRef)copyCGImageUsingDevice:(id)arg1 ;
-(void)updateUsingDevice:(id)arg1 ;
@end

