/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/Versions/A/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface AVMovieAtom : NSObject {

	NSDictionary* _movieParsingMessageFigDictionary;
	AVMovieAtom* _container;

}

@property (readonly) unsigned atomType; 
@property (readonly) long long atomOffset; 
@property (readonly) AVMovieAtom * container; 
-(void)dealloc;
-(AVMovieAtom *)container;
-(id)initWithFigDictionary:(id)arg1 ;
-(id)initWithFigDictionary:(id)arg1 :(unsigned long long)arg2 ;
-(unsigned)atomType;
-(long long)atomOffset;
@end
