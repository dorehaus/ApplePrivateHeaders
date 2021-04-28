/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/Versions/A/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TTZoomController : NSObject {

	double _zoomFactor;
	double _checklistZoomFactor;

}

@property (assign,nonatomic) double zoomFactor;                       //@synthesize zoomFactor=_zoomFactor - In the implementation block
@property (assign,nonatomic) double checklistZoomFactor;              //@synthesize checklistZoomFactor=_checklistZoomFactor - In the implementation block
-(id)init;
-(double)zoomFactor;
-(void)setZoomFactor:(double)arg1 ;
-(id)zoomAttributedString:(id)arg1 ;
-(id)zoomFontInAttributes:(id)arg1 ;
-(id)unzoomAttributedString:(id)arg1 ;
-(id)zoomAttributes:(id)arg1 ;
-(double)checklistZoomFactor;
-(void)setChecklistZoomFactor:(double)arg1 ;
-(id)reallyZoomFontInAttributes:(id)arg1 zoomDirection:(char)arg2 ;
-(id)zoomFont:(id)arg1 ;
-(id)unzoomFont:(id)arg1 ;
-(id)reallyZoomAttributes:(id)arg1 zoomDirection:(char)arg2 ;
-(id)reallyZoomAttributedString:(id)arg1 zoomDirection:(char)arg2 ;
-(id)unzoomFontInAttributes:(id)arg1 ;
-(id)unzoomAttributes:(id)arg1 ;
@end

