/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPDFSearchController : NSObject <UIWebPDFSearchOperationDelegate> {
    UIPDFDocument * _documentToSearch;
    bool  _notifiedThatSearchBegin;
    unsigned long long  _pageIndexWhenLimitHit;
    unsigned long long  _resultIndexWhenLimitHit;
    NSMutableArray * _results;
    NSOperationQueue * _searchQueue;
    NSString * _searchString;
    double  documentScale;
    unsigned long long  resultLimit;
    NSObject<UIWebPDFSearchControllerDelegate> * searchDelegate;
    unsigned long long  startingPageIndex;
}

@property (nonatomic) double documentScale;
@property (nonatomic, retain) UIPDFDocument *documentToSearch;
@property (nonatomic, readonly) bool paused;
@property (nonatomic) unsigned long long resultLimit;
@property (nonatomic, retain) NSArray *results;
@property (nonatomic) NSObject<UIWebPDFSearchControllerDelegate> *searchDelegate;
@property (nonatomic, retain) NSString *searchString;
@property (nonatomic, readonly) bool searching;
@property (nonatomic) unsigned long long startingPageIndex;

- (unsigned long long)_actualStartingPageIndex;
- (void)_clearSearchQueue;
- (void)cancel;
- (void)dealloc;
- (double)documentScale;
- (id)documentToSearch;
- (id)init;
- (void)pause;
- (bool)paused;
- (unsigned long long)resultLimit;
- (id)results;
- (void)resume;
- (void)search:(id)arg1;
- (void)search:(id)arg1 hasPartialResults:(id)arg2;
- (id)searchDelegate;
- (void)searchDidBegin:(id)arg1;
- (void)searchDidFinish:(id)arg1;
- (void)searchDidTimeOut:(id)arg1;
- (void)searchLimitHit:(id)arg1;
- (id)searchString;
- (void)searchWasCancelled:(id)arg1;
- (bool)searching;
- (void)setDocumentScale:(double)arg1;
- (void)setDocumentToSearch:(id)arg1;
- (void)setResultLimit:(unsigned long long)arg1;
- (void)setResults:(id)arg1;
- (void)setSearchDelegate:(id)arg1;
- (void)setSearchString:(id)arg1;
- (void)setStartingPageIndex:(unsigned long long)arg1;
- (unsigned long long)startingPageIndex;

@end