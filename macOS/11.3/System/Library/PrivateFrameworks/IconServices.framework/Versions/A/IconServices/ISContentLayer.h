/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/Versions/A/IconServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IconServices/ISLayer.h>

@protocol ISCompositorResource;
@class IFColor;

@interface ISContentLayer : ISLayer {

	char _acceptSymbol;
	IFColor* _backgroundColor;
	id<ISCompositorResource> _content;

}

@property (nonatomic,retain) IFColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) id<ISCompositorResource> content;              //@synthesize content=_content - In the implementation block
@property (assign,nonatomic) char acceptSymbol;                             //@synthesize acceptSymbol=_acceptSymbol - In the implementation block
-(char)acceptSymbol;
-(void)setAcceptSymbol:(char)arg1 ;
-(id)init;
-(void)setContent:(id<ISCompositorResource>)arg1 ;
-(id<ISCompositorResource>)content;
-(void)setBackgroundColor:(IFColor *)arg1 ;
-(IFColor *)backgroundColor;
@end
