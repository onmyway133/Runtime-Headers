/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
 */

@interface ABCollectionOpenURLAction : ABCollectionAbstractAction {
    NSDataDetector * _urlDetector;
}

@property (atomic, readwrite, retain) NSDataDetector *urlDetector;

- (void).cxx_destruct;
- (void)executeWithTarget:(id)arg1;
- (void)makeURLDetectorIfNecessary;
- (void)setUrlDetector:(id)arg1;
- (id)urlDetector;

@end
