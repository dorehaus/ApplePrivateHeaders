/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Mondrian.framework/Versions/A/Mondrian
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString;

@interface MOPhotosSupplementaryFooterInfo : NSObject {

	char _highlightInformation;
	char _progressDisabled;
	NSAttributedString* _title;
	NSAttributedString* _referencedMediaInformation;
	NSAttributedString* _subtitle;
	NSAttributedString* _message;
	NSAttributedString* _information;
	/*^block*/id _action;
	double _progress;

}

@property (nonatomic,retain) NSAttributedString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSAttributedString * referencedMediaInformation;              //@synthesize referencedMediaInformation=_referencedMediaInformation - In the implementation block
@property (nonatomic,retain) NSAttributedString * subtitle;                                //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSAttributedString * message;                                 //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSAttributedString * information;                             //@synthesize information=_information - In the implementation block
@property (assign,nonatomic) char highlightInformation;                                    //@synthesize highlightInformation=_highlightInformation - In the implementation block
@property (nonatomic,copy) id action;                                                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic) double progress;                                              //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) char progressDisabled;                                        //@synthesize progressDisabled=_progressDisabled - In the implementation block
-(id)init;
-(id)action;
-(NSAttributedString *)message;
-(void)setAction:(id)arg1 ;
-(void)setTitle:(NSAttributedString *)arg1 ;
-(void)setMessage:(NSAttributedString *)arg1 ;
-(double)progress;
-(NSAttributedString *)title;
-(NSAttributedString *)subtitle;
-(void)setSubtitle:(NSAttributedString *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setInformation:(NSAttributedString *)arg1 ;
-(NSAttributedString *)information;
-(NSAttributedString *)referencedMediaInformation;
-(void)setReferencedMediaInformation:(NSAttributedString *)arg1 ;
-(char)highlightInformation;
-(void)setHighlightInformation:(char)arg1 ;
-(char)progressDisabled;
-(void)setProgressDisabled:(char)arg1 ;
@end

