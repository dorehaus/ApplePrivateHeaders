/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Slideshows.framework/Versions/A/Slideshows
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MRShaderArguments : NSObject {

	char _texture0ClampsToBorder;
	char _texture1ClampsToBorder;
	NSString* _filter0;
	NSString* _filter1;
	NSString* _filter2;
	NSString* _filter3;

}

@property (copy) NSString * filter0;                                   //@synthesize filter0=_filter0 - In the implementation block
@property (copy) NSString * filter1;                                   //@synthesize filter1=_filter1 - In the implementation block
@property (copy) NSString * filter2;                                   //@synthesize filter2=_filter2 - In the implementation block
@property (copy) NSString * filter3;                                   //@synthesize filter3=_filter3 - In the implementation block
@property (assign,nonatomic) char texture0ClampsToBorder;              //@synthesize texture0ClampsToBorder=_texture0ClampsToBorder - In the implementation block
@property (assign,nonatomic) char texture1ClampsToBorder;              //@synthesize texture1ClampsToBorder=_texture1ClampsToBorder - In the implementation block
-(void)dealloc;
-(NSString *)filter0;
-(NSString *)filter1;
-(NSString *)filter2;
-(NSString *)filter3;
-(void)setFilter0:(NSString *)arg1 ;
-(void)setFilter1:(NSString *)arg1 ;
-(void)setFilter2:(NSString *)arg1 ;
-(void)setFilter3:(NSString *)arg1 ;
-(void)setTexture0ClampsToBorder:(char)arg1 ;
-(void)setTexture1ClampsToBorder:(char)arg1 ;
-(char)texture0ClampsToBorder;
-(char)texture1ClampsToBorder;
@end

