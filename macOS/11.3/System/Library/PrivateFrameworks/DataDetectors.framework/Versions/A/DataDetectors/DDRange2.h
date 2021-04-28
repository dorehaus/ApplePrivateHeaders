/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WKDOMNode;

@interface DDRange2 : NSObject {

	WKDOMNode* _node;
	long long _startOffset;
	long long _endOffset;

}

@property (nonatomic,retain) WKDOMNode * node;                   //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) long long startOffset;              //@synthesize startOffset=_startOffset - In the implementation block
@property (assign,nonatomic) long long endOffset;                //@synthesize endOffset=_endOffset - In the implementation block
+(id)rangeWithDOMRange:(id)arg1 ;
-(id)description;
-(WKDOMNode *)node;
-(long long)startOffset;
-(long long)endOffset;
-(id)initWithDOMRange:(id)arg1 ;
-(void)setNode:(WKDOMNode *)arg1 ;
-(void)setStartOffset:(long long)arg1 ;
-(void)setEndOffset:(long long)arg1 ;
@end

