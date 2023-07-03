# 多項式加法
<div data-step="14" data-intro="<p>描述中 <i class='fa fa-clipboard'></i> 按鈕可協助你複製到剪貼簿，並貼到本機實驗。</p> <p>若題目有特殊的字元格式，那在範例輸入/輸出測資不適用複製貼上，請務必小心</p>">
<p>假設二元多次多項式f(x,y)是有兩位未知數x,y形成的函數. 例如, f(x,y)=-2.2+4.7x<sup>0</sup>y<sup>3</sup>-1.1x<sup>4</sup>y<sup>2</sup>是一個二元多次方程式。</p>
<p>假設函數中x, y的次方最多是10，且最多有20項。以下是可以用來紀錄一個多元二次方程式的兩種可能格式：</p>
<p>格式A: 用三個陣列紀錄：</p>
<ul>
<li>第一個紀錄前方係數(如上例是-2.20, 4.70, -1.10)</li>
<li>第二個紀錄所有項的x是幾次方。此陣列資料<font color="red">必須從小到大排序</font>。如上例，是{0, 0, 4}</li>
<li>第三個紀錄所有項的y是幾次方。此陣列<font color="red">對應相同x次方的y次方數值也必須從小排到大</font>。如上例，雖然{3, 0, 2}和{0, 3, 2}都會取得相同多項式，但正確紀錄法是{0, 3, 2}。</li>
</ul>
<p>格式B: 用一個二維陣列A。A[i][j]是x<sup>i</sup>y<sup>j</sup>項前的係數。A[i][j]=0表示沒有x<sup>i</sup>y<sup>j</sup>項。如上例，如果用一個5x5的陣列來紀錄，內容會是：</p>
<pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_312751" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">-2.20 0.00 0.00 4.70 0.00</code></div><div class="line number2 index1 alt1"><code class="plain">0.00 0.00 0.00 0.00 0.00</code></div><div class="line number3 index2 alt2"><code class="plain">0.00 0.00 0.00 0.00 0.00</code></div><div class="line number4 index3 alt1"><code class="plain">0.00 0.00 0.00 0.00 0.00</code></div><div class="line number5 index4 alt2"><code class="plain">0.00 0.00 -1.10 0.00 0.00</code></div></div></td></tr></tbody></table></div>
</code></pre>
<p>請撰寫一個函式，讀取兩個以格式A紀錄的多項式，並把兩個多項式相加之後，以格式A輸出到畫面上。</p>
<p>輸入格式: 共有8行(rows)。第1到4行是第一個多項式，第5到8行是第二個多項式。每個多項式輸入格式是：</p>
<ul>
<li>第一行表示有幾項</li>
<li>第二行是係數</li>
<li>第三行是各項的x是幾次方</li>
<li>第四行是各項的y是幾次方</li>
</ul>
<p>輸出格式：根據格式A的規格輸出3行。</p>
<ul>
<li>第一行是係數。</li>
<li>第二行是各項的x是幾次方。必須從小到大排序。</li>
<li>第三行是各項的y是幾次方。對應相同x次方的y次方數值也必須從小排到大。
一個11x11的二維陣列。共有11行，每行11個有兩位小數的浮點數。每個數字之間以一個空白隔開。最後一個數字後面不可以有空白。</li>
</ul>
<h3 class="content-subhead">提示</h3><p>可先完成<a href="http://140.135.65.53:8800/problem/0/40432">多項式表示法(一)</a>和<a href="http://140.135.65.53:8800/problem/0/40433">多項式表示法(二)</a>之後，將讀取的資料先轉成兩個格式B的陣列，對陣列做加法，再轉換為格式A輸出。</p>
<h3 class="content-subhead">注意!!</h3><p>如果是兩個各20項的二元多次多項式相加之後有可能會有<font color="red">40項</font>。如果拿<a href="http://140.135.65.53:8800/problem/0/40433">多項式表示法(二)</a>的函式來用，其函數參數的陣列長度必須做對應的修改。</p>
<h3 class="content-subhead">Input Example</h3><p>兩個多項式f(x,y)=4.6x<sup>0</sup>y<sup>4</sup>+2.6x<sup>1</sup>y<sup>1</sup>和g(x,y)=4.0x<sup>0</sup>y<sup>4</sup>+1.0x<sup>4</sup>y<sup>1</sup>-1.1x<sup>4</sup>y<sup>2</sup>，對應的輸入是：</p>
<pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_189205" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">2</code></div><div class="line number2 index1 alt1"><code class="plain">4.60 2.60</code></div><div class="line number3 index2 alt2"><code class="plain">0 1</code></div><div class="line number4 index3 alt1"><code class="plain">4 1</code></div><div class="line number5 index4 alt2"><code class="plain">3</code></div><div class="line number6 index5 alt1"><code class="plain">4.00 1.00 -1.10</code></div><div class="line number7 index6 alt2"><code class="plain">0 4 4</code></div><div class="line number8 index7 alt1"><code class="plain">4 1 2</code></div></div></td></tr></tbody></table></div>
</code></pre>
<h3 class="content-subhead">Output Example</h3><p>上面兩方程式相加結果是8.6x<sup>0</sup>y<sup>4</sup>+2.6x<sup>1</sup>y<sup>1</sup>+1.0x<sup>4</sup>y<sup>1</sup>-1.1x<sup>4</sup>y<sup>2</sup>。輸出是：</p>
<pre><code><span class="fw-code-copy-button pure-button"><i class="fa fa-clipboard"></i></span><div id="highlighter_76213" class="syntaxhighlighter nogutter  "><table border="0" cellpadding="0" cellspacing="0"><tbody><tr><td class="code"><div class="container"><div class="line number1 index0 alt2"><code class="plain">8.60 2.60 1.00 -1.10</code></div><div class="line number2 index1 alt1"><code class="plain">0 1 4 4</code></div><div class="line number3 index2 alt2"><code class="plain">4 1 1 2</code></div></div></td></tr></tbody></table></div>
</code></pre>

</div>
