/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>
#import <libobjc.A.dylib/MKMultiLineLabelContainer.h>

@class _MKUILabel, NSString;

@interface MKTransitMessageCell : MKCustomSeparatorTableViewCell <MKMultiLineLabelContainer> {

	_MKUILabel* _messageLabel;

}

@property (nonatomic,copy) NSString * messageText; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMessageText:(NSString *)arg1 ;
-(NSString *)messageText;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)multilineTextFieldsWithinContainer;
@end

