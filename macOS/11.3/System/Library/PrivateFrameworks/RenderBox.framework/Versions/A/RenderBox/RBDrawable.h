/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/Versions/A/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RenderBox/RenderBox-Structs.h>
#import <libobjc.A.dylib/_RBDrawableDelegate.h>
#import <libobjc.A.dylib/RBDrawableStatistics.h>

@protocol RBDrawableDelegate, MTLTexture;
@class NSDictionary, RBDevice;

@interface RBDrawable : NSObject <_RBDrawableDelegate, RBDrawableStatistics> {

	unique_ptr<RB::Drawable, std::__1::default_delete<RB::Drawable>>* _drawable;
	spin_lock _statistics_handler_lock;
	objc_ptr<void ()(id<RBDrawableStatistics>)>* _statistics_handler;
	int _initialState;
	RBDevice* _device;
	double _scale;
	unsigned long long _pixelFormat;
	id<RBDrawableDelegate> _delegate;
	id<MTLTexture> _texture;
	CGSize _size;
	SCD_Struct_RB31 _clearColor;

}

@property (nonatomic,readonly) RBDevice * device;                                 //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<RBDrawableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGSize size;                                         //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double scale;                                        //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) unsigned long long pixelFormat;                      //@synthesize pixelFormat=_pixelFormat - In the implementation block
@property (assign,nonatomic) int initialState;                                    //@synthesize initialState=_initialState - In the implementation block
@property (assign,nonatomic) SCD_Struct_RB31 clearColor;                          //@synthesize clearColor=_clearColor - In the implementation block
@property (nonatomic,retain) id<MTLTexture> texture;                              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) double GPUDuration; 
@property (nonatomic,copy,readonly) NSDictionary * statistics; 
@property (nonatomic,copy) id statisticsHandler; 
-(CGSize)size;
-(id<RBDrawableDelegate>)delegate;
-(void)setDelegate:(id<RBDrawableDelegate>)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)finish;
-(RBDevice *)device;
-(id<MTLTexture>)texture;
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(unsigned long long)pixelFormat;
-(void)setClearColor:(SCD_Struct_RB31)arg1 ;
-(NSDictionary *)statistics;
-(double)scale;
-(SCD_Struct_RB31)clearColor;
-(void)setScale:(double)arg1 ;
-(id)initWithDevice:(id)arg1 ;
-(void)setInitialState:(int)arg1 ;
-(int)initialState;
-(void)dumpTexture:(id)arg1 name:(id)arg2 ;
-(void)_RBDrawableStatisticsDidChange;
-(void)resetStatistics:(unsigned long long)arg1 alpha:(double)arg2 ;
-(id)statisticsHandler;
-(void)setStatisticsHandler:(id)arg1 ;
-(void)renderDisplayList:(id)arg1 flags:(unsigned)arg2 ;
-(double)GPUDuration;
@end

