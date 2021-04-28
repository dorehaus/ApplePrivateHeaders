/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCXReadState.h>

@protocol TCCancelDelegate;
@class WDDocument, OITSUNoCopyDictionary, NSMutableDictionary, OCPPackagePart, NSMutableArray, WXOAVReadState, OAXDrawingState, WDCharacterRun, CXNamespace;

@interface WXReadState : OCXReadState {

	WDDocument* mDocument;
	OITSUNoCopyDictionary* mTextNodesToBeAdded;
	OITSUNoCopyDictionary* mMapBookmarkIdToName;
	OITSUNoCopyDictionary* mMapAnnotationIdToAnnotation;
	OITSUNoCopyDictionary* mMapAnnotationParaIdToAnnotation;
	NSMutableDictionary* mMapFlowIdToTextBox;
	OCPPackagePart* mPackagePart;
	OCPPackagePart* mAnnotationPart;
	OCPPackagePart* mAnnotationExtendedPart;
	xmlDoc* mFootnoteDocument;
	xmlNode* mFootnotes;
	xmlDoc* mEndnoteDocument;
	xmlNode* mEndnotes;
	xmlDoc* mAnnotationDocument;
	xmlNode* mAnnotations;
	xmlDoc* mAnnotationExtendedDocument;
	xmlNode* mAnnotationsExtended;
	NSMutableArray* mDeleteAuthorStack;
	NSMutableArray* mDeleteDateStack;
	NSMutableArray* mEditAuthorStack;
	NSMutableArray* mEditDateStack;
	NSMutableArray* mFormatAuthorStack;
	NSMutableArray* mFormatDateStack;
	NSMutableArray* mPendingCommentNodes;
	NSMutableArray* mPendingBookmarkNodes;
	WXOAVReadState* mWXOavState;
	OAXDrawingState* mDrawingState;
	int mCurrentOfficeArtTextType;
	WDCharacterRun* mReadSymbolTo;
	char mNewSectionRequested;
	char mReadingMath;
	unsigned long long mCurrentRowCNFStyle;
	unsigned long long mCurrentCellCNFStyle;
	char mCurrentTableWraps;
	id<TCCancelDelegate> mCancelDelegate;
	CXNamespace* mWXMainNamespace;
	CXNamespace* mWXDrawingNamespace;
	CXNamespace* mWXShapeNamespace;
	CXNamespace* mWXGroupNamespace;
	CXNamespace* mWXOOBibliographyNamespace;
	CXNamespace* mWXRelationshipNamespace;
	char mIsThumbnail;

}

@property (assign,nonatomic) int currentOfficeArtTextType; 
@property (nonatomic,retain) id<TCCancelDelegate> cancelDelegate; 
@property (nonatomic,retain) CXNamespace * WXMainNamespace; 
@property (nonatomic,retain) CXNamespace * WXDrawingNamespace; 
@property (nonatomic,retain) CXNamespace * WXShapeNamespace; 
@property (nonatomic,retain) CXNamespace * WXGroupNamespace; 
@property (nonatomic,retain) CXNamespace * WXOOBibliographyNamespace; 
@property (nonatomic,retain) CXNamespace * WXRelationshipNamespace; 
@property (assign,nonatomic) char readingMath; 
-(void)dealloc;
-(id)init;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(id)drawingState;
-(void)setIsThumbnail:(char)arg1 ;
-(char)isThumbnail;
-(id)packagePart;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(void)setPackagePart:(id)arg1 ;
-(void)setCancelDelegate:(id<TCCancelDelegate>)arg1 ;
-(id<TCCancelDelegate>)cancelDelegate;
-(BOOL)hasAnnotations;
-(id)annotationWithId:(long long)arg1 ;
-(xmlNode*)xmlAnnotationWithID:(long long)arg1 ;
-(void)addAnnotationId:(long long)arg1 annotation:(id)arg2 ;
-(id)annotationPart;
-(id)initNoStacksWith:(id)arg1 ;
-(BOOL)hasAnnotationsExtended;
-(void)addAnnotationParaId:(unsigned)arg1 annotation:(id)arg2 ;
-(id)annotationExtendedPart;
-(xmlNode*)xmlAnnotationExtendedWithParaId:(unsigned)arg1 ;
-(id)annotationWithParaId:(unsigned)arg1 ;
-(id)currentDeleteAuthor;
-(id)currentDeleteDate;
-(id)currentEditAuthor;
-(id)currentEditDate;
-(void)setDocumentPart:(id)arg1 ;
-(id)wxoavState;
-(CXNamespace *)WXMainNamespace;
-(xmlNode*)xmlFootnoteWithID:(long long)arg1 ;
-(xmlNode*)xmlEndnoteWithID:(long long)arg1 ;
-(void)setCurrentOfficeArtTextType:(int)arg1 ;
-(CXNamespace *)WXDrawingNamespace;
-(CXNamespace *)WXShapeNamespace;
-(CXNamespace *)WXGroupNamespace;
-(void)setTextBox:(id)arg1 forFlowId:(id)arg2 ;
-(id)textBoxForFlowId:(id)arg1 ;
-(id)readSymbolTo;
-(void)setReadSymbolTo:(id)arg1 ;
-(void)pushEditAuthor:(id)arg1 date:(id)arg2 ;
-(void)popEditAuthorDate;
-(void)pushDeleteAuthor:(id)arg1 date:(id)arg2 ;
-(void)popDeleteAuthorDate;
-(char)readingMath;
-(void)setReadingMath:(char)arg1 ;
-(id)nodesToBeAdded:(id)arg1 ;
-(void)clearOutNodesToBeAdded:(id)arg1 ;
-(void)addPendingComment:(xmlNode*)arg1 ;
-(char)currentTableWraps;
-(void)setCurrentRowCNFStyle:(unsigned long long)arg1 ;
-(void)setCurrentCellCNFStyle:(unsigned long long)arg1 ;
-(void)setCurrentTableWraps:(char)arg1 ;
-(unsigned long long)currentCellCNFStyle;
-(unsigned long long)currentRowCNFStyle;
-(void)addText:(id)arg1 node:(xmlNode*)arg2 ;
-(void)addPendingBookmark:(xmlNode*)arg1 ;
-(id)pendingComments;
-(void)clearPendingComments;
-(id)pendingBookmarks;
-(void)clearPendingBookmarks;
-(char)isNewSectionRequested;
-(void)setNewSectionRequested:(char)arg1 ;
-(int)currentOfficeArtTextType;
-(CXNamespace *)WXOOBibliographyNamespace;
-(void)setWXMainNamespace:(CXNamespace *)arg1 ;
-(void)setWXDrawingNamespace:(CXNamespace *)arg1 ;
-(void)setWXShapeNamespace:(CXNamespace *)arg1 ;
-(void)setWXGroupNamespace:(CXNamespace *)arg1 ;
-(void)setWXOOBibliographyNamespace:(CXNamespace *)arg1 ;
-(void)setWXRelationshipNamespace:(CXNamespace *)arg1 ;
-(void)addBookmarkId:(long long)arg1 name:(id)arg2 ;
-(id)bookmarkName:(long long)arg1 ;
-(void)setAnnotationPart:(id)arg1 ;
-(void)setAnnotationExtendedPart:(id)arg1 ;
-(void)pushFormatAuthor:(id)arg1 date:(id)arg2 ;
-(void)popFormatAuthorDate;
-(id)currentFormatAuthor;
-(id)currentFormatDate;
-(CXNamespace *)WXRelationshipNamespace;
@end

